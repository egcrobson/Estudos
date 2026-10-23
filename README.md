# 📚 Estudos de Algoritmos

Repositório onde guardo os algoritmos que desenvolvo enquanto estudo lógica de programação, Python e C. A ideia é resolver problemas clássicos **do zero**, muitas vezes com restrições propositais (como não usar operadores ou funções prontas), para entender de verdade o que acontece por baixo dos panos.

![Python](https://img.shields.io/badge/Python-3.x-3776AB?logo=python&logoColor=white)
![C](https://img.shields.io/badge/C-A8B9CC?logo=c&logoColor=black)
![Status](https://img.shields.io/badge/status-em%20andamento-yellow)

---

## 🗂️ Algoritmos

| # | Algoritmo | Linguagem | Arquivo | Desafio / objetivo | Conceitos |
|---|-----------|-----------|---------|--------------------|-----------|
| 1 | Par ou ímpar | Python | [`parimapr.py`](parimapr.py) | Descobrir se um número é par ou ímpar **sem usar o resto da divisão** (`%`) | Laços `while`, condicionais, funções, subtração sucessiva |
| 2 | Calculadora | C | [`calc.c`](calc.c) | Calculadora de terminal com menu para as quatro operações básicas | Menu com `switch`, laço `while`, procedimentos, `scanf`/`printf` |
| 3 | Ping de IP | C | [`d.c`](d.c) | Ler um endereço IP e testar a conexão com ele usando o comando `ping` do sistema | Strings, `sprintf`, chamadas ao sistema com `system()` |
| 4 | Gerenciador de máquinas virtuais | C | [`maquina 1.c`](maquina%201.c) | Menu para listar, criar e rodar HDs virtuais e instalar sistemas operacionais com o QEMU | Menu com `do...while` e `switch`, procedimentos, montagem de comandos com `sprintf`, `system()` |

---

## 🔍 Detalhes

### 1. Par ou ímpar sem o operador de resto

**Problema:** dado um número inteiro, dizer se ele é par ou ímpar — mas sem usar `n % 2`.

**Ideia:** subtrair 2 repetidamente. Todo número par, ao perder 2 em 2, chega exatamente em `0`; todo número ímpar chega em `1`.

```
7 → 5 → 3 → 1   ⇒ ímpar
8 → 6 → 4 → 2 → 0   ⇒ par
```

**Complexidade:** O(n) em tempo (são cerca de n/2 subtrações) e O(1) em memória.
É mais lento que `n % 2` (que é O(1)), mas o objetivo aqui é praticar a lógica sem atalhos.

**Exemplo de uso:**

```
$ python parimapr.py
Descobrir se o numero é par ou impar - sem o uso do resto da divisão
Digite um número: 7
impar
```

### 2. Calculadora

Programa de terminal que mostra um menu e executa soma, subtração, multiplicação ou divisão entre dois números lidos do teclado. Cada operação fica em um procedimento próprio (`rotsoma`, `rotsubtracao`, `rotmultiplica`, `rotdivisao`), e o menu se repete até o usuário escolher a opção **5 - Sair**.

```
Menu da calculadora
---------------------

1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair do programa
```

### 3. Ping de IP

Pede um endereço IP ao usuário, monta o comando `ping <ip>` com `sprintf` e o executa com `system()`. É um exemplo simples de como um programa em C pode chamar comandos do sistema operacional.

### 4. Gerenciador de máquinas virtuais (QEMU)

Uma interface de menu em C para o emulador [QEMU](https://www.qemu.org/), que automatiza tarefas que normalmente seriam feitas digitando comandos no terminal:

| Opção | Item do menu |
|-------|-----------|
| 1 | Lista os HDs virtuais (`*.img`) da pasta |
| 2 | Lista as imagens ISO (`*.iso`) disponíveis |
| 3 | Cria um HD virtual com `qemu-img create` |
| 4 | Instala um sistema operacional a partir de uma ISO |
| 5 | Inicia a máquina virtual a partir do HD |
| 6 | Sai do programa |

---

## ▶️ Como executar

```bash
git clone https://github.com/egcrobson/Estudos.git
cd Estudos
```

**Python** — pré-requisito: [Python 3](https://www.python.org/downloads/).

```bash
python parimapr.py
```

**C** — os programas foram feitos no Windows. `calc.c` e `maquina 1.c` usam a biblioteca `conio2.h` (funções `clrscr()` e `getche()`), disponível no [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), que é a forma mais simples de compilá-los. `maquina 1.c` também precisa do [QEMU](https://www.qemu.org/download/) instalado.

```bash
gcc d.c -o ping_ip
ping_ip
```

---

## 🛣️ Próximos passos

- [ ] Tratar números negativos no algoritmo de par ou ímpar
- [ ] Adicionar novos algoritmos (ordenação, busca, recursão, etc.)
- [ ] Organizar os arquivos em pastas por tema conforme o repositório crescer

---

## 👤 Autor

**egcrobson** — [github.com/egcrobson](https://github.com/egcrobson)

Sugestões e feedbacks são bem-vindos! Fique à vontade para abrir uma *issue*.
