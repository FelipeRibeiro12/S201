package main

import (
	"fmt"
	"math/rand"
	"time"
)

func factorial(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return n * factorial(n-1)
}

func main() {
	rand.Seed(time.Now().UnixNano())
	num := rand.Intn(10)
	result := factorial(num)
	
	fmt.Printf("Fatorial de %d é: %d\n", num, result)
}