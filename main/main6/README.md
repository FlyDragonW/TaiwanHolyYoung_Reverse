## Challenge Name
```
0x06-Dynamic
```
## Challenge
```
GDB is your best friend.  
Author: FlyDragon
```
## File
- `main_6`
## Flag
```
FLAG{dyn4m1c_aNalYze!}
```
## Solve
```
gdb ./main_6
```
在 main 下斷點，持續執行到呼叫 dec() ，flag 會儲存在 Stack 上
