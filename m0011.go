package main

import "fmt"

func main() {
	var n, max1, max2 int
	max1 = 0
	max2 = 0
	fmt.Scan(&n)
	arr := make([]int, 0, n)
	for i := 0; i < n; i++ {
		var a int
		fmt.Scan(&a)
		arr = append(arr, a)
		if max1<arr[i] {
			max2 = max1
			max1 = arr[i]
		} else if max2<arr[i] {
			max2 = arr[i]
		}
	}
	fmt.Print(max2)
}