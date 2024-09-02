fn main() {
    let mut num1 = String::new();
    std::io::stdin().read_line(&mut num1).unwrap();
    let num1: i32 = num1.trim().parse().unwrap();

    let mut num2 = String::new();
    std::io::stdin().read_line(&mut num2).unwrap();
    let num2: i32 = num2.trim().parse().unwrap();

    println!("1 = Multiplicar");
    println!("2 = Somar");

    let mut escolha = String::new();
    std::io::stdin().read_line(&mut escolha).unwrap();
    let escolha: i32 = escolha.trim().parse().unwrap();

    match escolha {
        1 => {
            let resultado = num1 * num2;
            println!("Resultado da multiplicacao: {}", resultado);
        }
        2 => {
            let resultado = num1 + num2;
            println!("Resultado da soma: {}", resultado);
        }
        _ => {
            println!("Opcao invalida");
        }
    }
}