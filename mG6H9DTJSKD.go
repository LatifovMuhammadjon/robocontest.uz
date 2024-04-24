package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n) 
	if n%21==0 {
		fmt.Print("FizzBuzz")
	} else if n%3==0 {
		fmt.Print("Fizz")
	} else if n%7==0 {
		fmt.Print("Buzz")
	} else {
		fmt.Print("bad")
	}
}