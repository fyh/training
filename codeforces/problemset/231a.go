package main

import "fmt"

func main() {
	var n, ans int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var x, y, z int
		fmt.Scan(&x, &y, &z)
		if x+y+z >= 2 {
			ans++
		}
	}
	fmt.Println(ans)
}
