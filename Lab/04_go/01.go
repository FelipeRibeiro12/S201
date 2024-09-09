package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b, c float64

	fmt.Print("Digite o primeiro numero (a²): ")
	fmt.Scanln(&a)

	fmt.Print("Digite o segundo numero (b): ")
	fmt.Scanln(&b)

	fmt.Print("Digite o terceiro numero (c): ")
	fmt.Scanln(&c)

	delta := b*b - 4*a*c

	r_delta := math.Sqrt(delta)
	x1 := (-b + r_delta) / (2 * a)
	x2 := (-b - r_delta) / (2 * a)

	fmt.Printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2)
}