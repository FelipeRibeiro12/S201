main :: IO ()
main = do
    let lista = [30,29..1]
    let listaMultiplicada = map (*3) lista
    let listaInvertida = reverse listaMultiplicada
    let ultimoElemento = last listaInvertida
    print ultimoElemento