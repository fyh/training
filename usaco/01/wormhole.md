
思路：
1. 枚举所有可行组合
  每次只枚举标号最小的，避免重复的情况。
   
2. 判断给定组合是否有环
  如果存在环，那么环上必有一个wormhole，所以枚举所有wormhole作为环的起始点。