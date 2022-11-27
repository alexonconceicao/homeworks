# -----------------------------------------------------------------------------------------------------------------------------------------------------

# Armazene num vetor de 5 posições o salário de 5 pessoas.
# Se o salário for menor que 1000 reais, forneça um aumento de 10% e sobrescreva o valor antigo.
# Ao final, mostre a lista de salários atualizada.

# salarios = [1400, 1000, 500, 300, 200]
# salariosAtualizada = []

# for s in salarios:
#     if s < 1000:
#         novoValor = s + (s * 0.10)
#         salariosAtualizada.append(novoValor)
#     if s >= 1000:
#         salariosAtualizada.append(s)

# print(salariosAtualizada)


# -----------------------------------------------------------------------------------------------------------------------------------------------------
# Faca um programa que leia n valores reais.
# Armazene estes valores num vetor.
# Ao final, imprima a média aritmética destes valores.

# vetorMedia = []
# qtdValoresDigitados = 0
# somatorioTotal = 0

# while True:
#     numeros = float(
#         input('Informe alguns números (quando quiser parar é só digitar "0"): ')
#     )

#     if numeros == 0:
#         break

#     vetorMedia.append(numeros)
#     qtdValoresDigitados = qtdValoresDigitados + 1

# for n in vetorMedia:
#     somatorioTotal = somatorioTotal + n

# mediaAritmetica = somatorioTotal / qtdValoresDigitados

# print(f'O valor da média aritmética é: {mediaAritmetica} ')

# -----------------------------------------------------------------------------------------------------------------------------------------------------
# Faca um programa que pergunte ao usuário o numero de alunos a ser lido.
# O tamanho dos vetores será o numero informado pelo usuário.
# Armazene num vetor as notas G1 destes alunos; num outro vetor, armazene as notas G2 destes alunos.
# Ambas notas, G1 e G2, são informadas pelo usuário.
# Calcule a media aritmética destes alunos e armazene num terceiro vetor.
# Ao final, mostre as 3 notas dos alunos.

# g1 = []
# g2 = []
# mediaArtimetica = []

# print('\n---------------------------------------------------------')
# quantidadeAlunos = int(input('\nInforme a quantidade de alunos: '))

# for y in range(1, quantidadeAlunos + 1):
#     print('\n---------------------------------------------------------')
#     nota1 = float(input(f'\nInforme a nota G1 do aluno {y}: '))
#     g1.append(nota1)
#     nota2 = float(input(f'\nInforme a nota G2 do aluno {y}: '))
#     g2.append(nota2)
#     media = (nota1 + nota2) / 2
#     mediaArtimetica.append(media)

# print('G1 é: ', g1)
# print('G2 é: ', g2)
# print('A média aritmética é: ', mediaArtimetica)

# -----------------------------------------------------------------------------------------------------------------------------------------------------
# Faca um algoritmo que leia e armazene 5 valores inteiros em um vetor Vet1.
# Leia outros 5 valores inteiros e armazene num vetor Vet2. A partir destes valores lidos, mostre na tela:
# 1. a soma dos elementos de ca­da vetor, nas respectivas posições
# 2. a diferença dos elementos de cada vetor, nas respectivas posições
# 3. o produto dos elementos de cada vetor, nas respectivas posições
# 4. a divisão entre os elementos de cada vetor, nas respectivas posições

# somaVetor = []
# diferencaVetor = []
# produtoVetor = []
# divisaoVetor = []

# print('\n---------------------------------------------------------')
# question = input('Informe 5 números separados por vírgula: ')
# vet1 = []
# for n in question.split(','):
#     if n.isdigit():
#         vet1.append(int(n))

# print('\n---------------------------------------------------------')
# question2 = input('Informe outros 5 números separados por vírgula: ')
# vet2 = [int(n) for n in question2.split(',') if n.isdigit()]

# for n, y in zip(vet1, vet2):
#     soma = n+y
#     diferenca = n-y
#     produto = n*y
#     divisao = n/y
#     somaVetor.append(soma)
#     diferencaVetor.append(diferenca)
#     produtoVetor.append(produto)
#     divisaoVetor.append(divisao)

# print('soma: ', somaVetor)
# print('diferença: ', diferencaVetor)
# print('produto: ', produtoVetor)
# print('divisão: ', divisaoVetor)