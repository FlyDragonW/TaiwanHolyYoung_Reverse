## Challenge
```
The spell is powerful!  

Flag format: LoTuX{.*}  

Author：FlyDragon
```
## File
- `flag`
## Flag
```
LoTuX{R3mem8er_The_Spe11!}
```
## Solve
### Step.1
執行 `flag` 檔案
```
$ ./flag 
```

會得到這個錯誤訊息
```
Welcome to LoTuX CTF, try to find the flag >.0
[Errno 2] No such file or directory: 'LoTuX_CTF/flag.txt'
```

### Step.2
創建 `LoTuX_CTF` 資料夾、`flag.txt`
```
$ mkdir LoTuX_CTF
$ touch LoTuX_CTF/flag.txt
```

### Step.3
再次執行 `flag` 會得到這個錯誤訊息

```
Nothing here... 
 Where can I buy the flag?
[Errno 2] No such file or directory: 'Shop/flag.txt'
```

創建對應資料夾跟檔案
```
$ mkdir Shop
$ touch Shop/flag.txt
```

### Step.4

再次執行 `flag` 會得到這個錯誤訊息
```
Nothing here... 
 Ummm... What is that?
[Errno 2] No such file or directory: 'Shop/SecretRoom/flag.txt'
```

創建對應資料夾跟檔案
```
$ mkdir Shop/SecretRoom
$ touch Shop/SecretRoom/flag.txt
```

### Step.5
再次執行 `flag` 得知需要 key
```
There is a security box.
What is the key?
There is no key or the key is not correct
```

到 SecretRoom 尋找 key
```
$ cd Shop/SecretRoom
$ ls
```

會發現有很多 locker

```
flag.txt  locker10  locker3  locker5  locker7  locker9
locker1   locker2   locker4  locker6  locker8  SecurityBox
```

可以用 ls 遞迴列出所有 locker 的內容
```
$ls -R
```
發現 locker8 有 key.txt
```
./locker8:
key.txt
```
把 key.txt 放入 SecurityBox
```
mv locker8/key.txt SecurityBox/
```

### Step.6
再次執行 `flag` 會得到這個錯誤訊息
```
Nothing in the box...
Maybe I should go back home.
[Errno 2] No such file or directory: 'Home/flag.txt'
```

創建對應資料夾跟檔案
```
$ mkdir Home
$ touch Home/flag.txt
```

### Step.7
再次執行 `flag` 會得到這個錯誤訊息
```
I'm so tired. Let's call it a day.
[Errno 2] No such file or directory: 'Home/Drawer/MagicSpell.txt'
```

創建對應資料夾跟檔案
```
$ mkdir Home/Drawer
$ touch Home/Drawer/flag.txt
```

### Step.8

再次執行 `flag` ，輸入 "blablabla"，得知要取得 spell
```
I'm so tired. Let's call it a day.
blablabla
This is not the spell!
```
```
cat Home/Drawer/MagicSpell.txt
```

得到 spell
```
Curious teach me
```

### Step.9
執行 `flag` 輸入 spell
```
*Something happened in SecretRoom*
```

檢查 SecretRoom 會發現 locker3 有 flag 
```
./locker3:
flag.txt
```

取得 flag
```
$cat locker3/flag.txt
```
