# 📚 Estudos de Algoritmos

Repositório onde guardo os algoritmos que desenvolvo enquanto estudo lógica de programação e Python. A ideia é resolver problemas clássicos **do zero**, muitas vezes com restrições propositais (como não usar operadores ou funções prontas), para entender de verdade o que acontece por baixo dos panos.

![Python](https://img.shields.io/badge/Python-3.x-3776AB?logo=python&logoColor=white)
![Status](https://img.shields.io/badge/status-em%20andamento-yellow)

---

## 🗂️ Algoritmos

| # | Algoritmo | Arquivo | Desafio / restrição | Conceitos |
|---|-----------|---------|---------------------|-----------|
| 1 | Par ou ímpar | [`parimapr.py`](parimapr.py) | Descobrir se um número é par ou ímpar **sem usar o resto da divisão** (`%`) | Laços `while`, condicionais, funções, subtração sucessiva |

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

---

## ▶️ Como executar

Pré-requisito: [Python 3](https://www.python.org/downloads/) instalado.

```bash
git clone https://github.com/egcrobson/estudos.git
cd estudos
python parimapr.py
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
