## Challenge
```
"Heart Jack's Quiz"
If you answer incorrectly even once, you will perish!
But can you really pass it ...?

Flag format: LoTuX{.*}  

Author：FlyDragon
```
## File
- `HeartJack.zip`
## Flag
```
LoTuX{Y0u_4re_th3_J0ker!}
```
## Solve
### Step.1
試玩幾次會發現無法通關
![](https://i.imgur.com/0jAjfRq.png)
### Step.2
查看原始碼
發現`UpdateQuestion()`有破題關鍵

- 玩家名稱格式需為"XXYshiya" X代表任意字元；Y代表數字
- secret(Y,timer)需等於20
- timer不可小於10

達成上述條件時，最終答案為1或3
![](https://i.imgur.com/DaKR6Yq.png)

### Step.3
查看`secret()`
發現只有當y等於0且x等於11時有機會回傳20
![](https://i.imgur.com/S7LmMPl.png)
--> secret(1,10) 會回傳20
### Step.4
取名為`ch1shiya`再次遊玩遊戲，在倒數時間為10秒時進入最後一關並選擇菱形
取得部分flag
![](https://i.imgur.com/ydkSR7I.png)

註：請注意是否為最後一關（倒數兩關蠻相似的）
### Step.5
猜測剩下的flag會以不同形式儲存在遊戲中
使用AssetStudio拆包，找到`ACE_UNDER_SLEEVE`

![](https://i.imgur.com/5vN4NWy.png)

結合flag，完成
