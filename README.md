# 🔢 Calculadora de Média Aritmética em C

<div align="center">

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compilador](https://img.shields.io/badge/Compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Plataforma](https://img.shields.io/badge/Plataforma-Linux%20%7C%20Windows%20%7C%20macOS-0078D6?style=for-the-badge&logo=linux&logoColor=white)]()
[![Status](https://img.shields.io/badge/Status-Concluído-28a745?style=for-the-badge)]()

</div>

> Programa simples em C que lê três números do usuário e calcula a média aritmética, exibindo o resultado com duas casas decimais.

---

## ⚙️ Funcionalidades

- Leitura de três números reais (`float`)
- Cálculo da média aritmética: `(a + b + c) / 3`
- Exibição do resultado com duas casas decimais

---

## 💻 Exemplo de Saída

```
Digite o primeiro número: 7
Digite o segundo número: 8
Digite o terceiro número: 9
A média aritmética é: 8.00
```

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado — verifique com `gcc --version`

### Passos

```bash
# 1. Clone o repositório
git clone https://github.com/IgorASB/projeto-github.git
cd projeto-github

# 2. Compile (use aspas por causa dos acentos no nome do arquivo)
gcc "média-aritmética.c" -o media

# 3. Execute
./media          # Linux/macOS
media.exe        # Windows
```

> ⚠️ **Observação:** O nome do arquivo contém caracteres acentuados (`é`). Use sempre **aspas duplas** ao referenciar o arquivo no terminal para evitar erros em qualquer sistema operacional.

---

## 🧠 Conceitos de C Aplicados

| Conceito | Aplicação no Projeto |
|---|---|
| Variáveis `float` | Armazenamento dos três números e do resultado |
| `scanf` / `printf` | Leitura da entrada e exibição formatada do resultado |
| Operadores aritméticos | Soma e divisão para o cálculo da média |
| Formatação `%.2f` | Exibição do resultado com duas casas decimais |

---

## 📁 Estrutura do Projeto

```
projeto-github/
├── média-aritmética.c   # Código-fonte principal
└── README.md
```

---

## 👤 Autor

Feito por **Igor Amaral** — Estudante de Ciência da Computação

[![GitHub](https://img.shields.io/badge/GitHub-IgorASB-181717?style=flat&logo=github)](https://github.com/IgorASB)
