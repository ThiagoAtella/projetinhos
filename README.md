# 🛠️ Projetinhos

Pequenos projetos em **C** desenvolvidos durante o tempo livre para praticar lógica de programação e conceitos fundamentais da linguagem.

---

## 📂 Projetos

### 🔢 `calculadora.c`
Uma calculadora interativa via terminal que suporta as quatro operações aritméticas básicas.

**Funcionalidades:**
- Soma
- Subtração
- Multiplicação
- Divisão

**Como funciona:** O usuário escolhe a operação desejada por um menu numérico, informa dois números inteiros e recebe o resultado no terminal.

**Como compilar e executar:**
```bash
gcc calculadora.c -o calculadora
./calculadora
```

---

### ✅ `ehpositivo.c`
Programa que verifica se um número inteiro digitado pelo usuário é positivo ou não.

**Como funciona:** A função `ehPositivo` retorna `1` se o número for maior que zero e `0` caso contrário. Com base nesse retorno, o programa exibe "Valor aceito" ou "Valor rejeitado".

**Como compilar e executar:**
```bash
gcc ehpositivo.c -o ehpositivo
./ehpositivo
```

---

### 🧮 `matriz.c`
Programa para preenchimento e exibição de uma matriz bidimensional de inteiros com dimensões **5 × 4**.

**Como funciona:** O usuário digita os valores linha por linha e, ao final, a matriz é impressa formatada no terminal.

**Como compilar e executar:**
```bash
gcc matriz.c -o matriz
./matriz
```

---

### 📐 `matriz4.c`
Programa que trabalha com uma matriz quadrada **3 × 3**, calculando a soma das diagonais principal e secundária.

**Como funciona:**
- Preenche a matriz com valores digitados pelo usuário.
- Exibe a matriz no terminal.
- Calcula e exibe a **soma da diagonal principal** (onde `i == j`).
- Calcula e exibe a **soma da diagonal secundária** (onde `i + j == N - 1`).

**Como compilar e executar:**
```bash
gcc matriz4.c -o matriz4
./matriz4
```

---

### 🚗 `structs.c`
Programa que gerencia uma frota de **5 carros** usando structs, com ordenação alfabética por modelo.

**Struct `Carro` possui os campos:**
| Campo    | Tipo    | Descrição               |
|----------|---------|-------------------------|
| `ano`    | `int`   | Ano de fabricação       |
| `modelo` | `char[25]` | Modelo do carro      |
| `marca`  | `char[25]` | Marca do carro       |
| `valor`  | `float` | Valor em reais          |

**Como funciona:** O usuário cadastra os dados de 5 carros. O programa ordena a frota em ordem alfabética pelo modelo usando o algoritmo de **Selection Sort** e exibe os carros ordenados.

**Como compilar e executar:**
```bash
gcc structs.c -o structs
./structs
```

---

## 🚀 Pré-requisitos

- Compilador **GCC** instalado
- Sistema operacional Linux, macOS ou Windows (com MinGW/WSL)

---

## 📄 Licença

Este projeto está sob a licença disponível no arquivo [LICENSE](LICENSE).
