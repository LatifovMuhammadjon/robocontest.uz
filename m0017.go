package main

import "fmt"


func sumDigits(number int) int {
    remainder:= 0
    sumResult:= 0
    for number!=0{
        remainder = number % 10
        sumResult += remainder
        number = number / 10
    }
    return sumResult
}

func main() {
	var n int
	var i, counter int = 0, 0
	fmt.Scan(&n)
	for counter!= n {
		i++
		s := sumDigits(i)
		s*=s
		if i%s==0 {
			counter++
		}
		
	}
	fmt.Print(i)
}