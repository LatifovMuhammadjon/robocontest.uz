package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	for i:=1; i<=n; i++ {
		if i%15 == 0 {
			fmt.Print("FizzBuzz")
		} else if i%3 == 0{
			fmt.Print("Fizz")
		} else if i%5 == 0{
			fmt.Print("Buzz")
		} else {
			fmt.Print(i)
		}
		fmt.Print(" ")
	}
}