package main

import "fmt"

func main() {
  var a, b, maks int
  fmt.Scan(&a, &b)
  maks = max(a, b)
  arr := make([]int, 0, maks+1)
  for i:=0; i<= maks; i++ {
    if i<2 {
    arr = append(arr, i)
    } else {
    arr = append(arr, arr[i-1]+arr[i-2])
    }
  }
  for arr[a]!= 0 && arr[b] != 0 {
	if arr[a] > arr[b] {
		arr[a]%=arr[b]
	} else {
		arr[b] %=arr[a]
	}
  }
  fmt.Print((arr[a]+arr[b])%1000000007)
}
