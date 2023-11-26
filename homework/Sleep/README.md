## Challenge
```
Talk is cheap, show me your skill.  
Author: FlyDragon
```
## File
- `sleep`
## Flag
```
FLAG{xXx0oORrR_s1e3pr0c}
```
## Solve
### Step.1
使用 IDA 查看 `main()` 得知要先處理 `check_access()`
```c=
//main()
printf("Please enter your name : ");
scanf("%s", name);
if ( check_access(name) == 1 )
{
printf("Permission accept.\nPlease enter your password : ");
scanf("%s", password);
verify(password);
for ( i = 0; i <= 9; ++i )
  putchar(flag[i]);
}
else
{
printf("Permission denied.");
}
```

### Step.2
查看 `check_access()` 會發現其實只是字串比對
```c=
//check_access
strcpy(secret, "EO@J~{[{3rRQqQ");
while ( i <= 14 )
{
if ( ((unsigned __int8)(str[i] + 1) ^ 2) != secret[i] )
  return 0;
++i;
}
```
撰寫程式找到能通過比對的字串
```py=
enc = "EO@J~{[{3rRQqQ"
dec = ""
for c in enc:
    num = ord(c) ^ 2
    dec += chr(num - 1)

print(dec)
```
--> 得到前半部分 flag

### Step.3
查看 `verify()` 可以找到密碼且輸入密碼後進入複數個 process
```c=
strcpy(password, "super_secret_pw");
if ( !strcmp(str, password) )
    process_01();
else
    printf("Permission denied.");
```
### Step.4
查看各個 process 發現會對 flag 做更動，但因為 `sleep()` 導致無法輸出 flag

全部都改成 `sleep(0)`

![](https://hackmd.io/_uploads/BySRBF_L2.png)

## Step.5
```
Please enter your name : <flag_1>
Permission accept.
Please enter your password : super_secret_pw
<flag_2>
```
