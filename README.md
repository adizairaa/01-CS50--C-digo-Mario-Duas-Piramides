# 🏗️ *Pyramid Builder - Mario Style*

Este repositório contém um programa em *C* que gera uma pirâmide semelhante àquela encontrada no jogo Super Mario. Este projeto da primeira unidade do curso da CS50, demonstrando conceitos básicos de lógica de programação, loops, e funções.

---

## 📄 *Descrição do Programa*

O programa solicita ao usuário um número inteiro entre 1 e 8, representando a altura da pirâmide. Em seguida, ele constrói a pirâmide com os seguintes critérios:

- Cada linha contém dois blocos de hashtags (#) separados por dois espaços.
- A quantidade de hashtags aumenta em cada linha, enquanto os espaços à esquerda diminuem.

Exemplo para altura n = 4:

plaintext
   #  #
  ##  ##
 ###  ###
####  ####


---

## 🚀 *Como Rodar o Programa*

### *Pré-requisitos*
- Um compilador C, como gcc.
- Bibliotecas do CS50 instaladas, disponíveis em [CS50 Library for C](https://cs50.readthedocs.io/).

### *Execução*

1. Clone o repositório:
   bash
   git clone https://github.com/seuusuario/pyramid-builder.git
   cd pyramid-builder
   

2. Compile o programa com o gcc:
   bash
   gcc -o pyramid pyramid.c -lcs50
   

3. Execute o programa:
   bash
   ./pyramid
   

4. Insira a altura da pirâmide (um número entre 1 e 8).

---

## 📚 *Conceitos Praticados*

- *Loops*: Uso de for para manipular espaços e hashtags.
- *Funções*:
  - print(char c, int n): Função auxiliar para imprimir caracteres repetidos.
- *Validação de Entrada*:
  - Uso de um do-while para garantir que o número inserido esteja no intervalo permitido.

---

## 📊 *Estrutura do Código*

plaintext
pyramid-builder/
├── pyramid.c        # Código-fonte principal do projeto
├── README.md        # Documentação do projeto


### *Explicação do Código*
1. *Entrada de Dados*:
   - Solicita ao usuário a altura da pirâmide até que um valor válido (1 a 8) seja inserido.
2. *Construção da Pirâmide*:
   - Usa loops para imprimir espaços e hashtags em formato crescente.
3. *Função print*:
   - Simplifica a impressão de múltiplos caracteres de forma modular.

---

## 🌟 *Exemplo de Uso*

Ao executar o programa, o seguinte fluxo pode ocorrer:

plaintext
$ ./pyramid
height: 4
   #  #
  ##  ##
 ###  ###
####  ####


---

## 📜 *Licença*

Este projeto está licenciado sob a [MIT License](LICENSE).

