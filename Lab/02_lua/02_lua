local tabela = {}
for i = 1, 100 do
  tabela[i] = math.random(1, 100)
end

local countPares = 0
for i, valor in ipairs(tabela) do
  if valor % 2 == 0 then
    countPares = countPares + 1
  end
end

print("Tabela:")
for i, valor in ipairs(tabela) do
  print(string.format("%d: %d", i, valor))
end
print(string.format("Quantidade de pares: %d", countPares))