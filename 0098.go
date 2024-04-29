package main

import "fmt"

func main() {
	var n, counter int
	counter = 0
	fmt.Scan(&n)
	for n!=1 {
		counter++
		if n%3==0 {
			n/=3
		} else if n%3 ==1{
			n = 2*n+1
		} else {
			n = 2*n-1
		}
	}
	fmt.Print(counter)
}