package main

import "fmt"

func print(value int, counter *int) int {
	if value == 0 {
		return 0
	}
	var count int
	if counter == nil {
		count = 1
	} else {
		count = *counter + 1
	}
	fmt.Printf("%d ", count)
	return print(value-1, &count)
}

func main() {
	print(10, nil)
}
