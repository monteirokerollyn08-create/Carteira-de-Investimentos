# Carteira de Investimentos

Programa em C, feito para rodar no terminal, que ajuda a organizar e acompanhar uma carteira pequena de investimentos.

Trabalho Final (Checkpoint 3) de Algoritmos e Pensamento Computacional, 2026-2, Grupo 07, em parceria com Design Profissional. Centro Universitário Braz Cubas.

## 1. Descrição do projeto

Quem está começando a investir geralmente anota os ativos, as quantidades e os preços em lugares diferentes, e acaba tendo dificuldade para saber quanto a carteira vale e quanto está rendendo.

A ideia do projeto é juntar tudo isso em um programa só. O usuário cadastra cada ativo com nome, categoria, quantidade, preço de compra e preço atual, e o programa calcula o valor atual, a rentabilidade e o lucro ou prejuízo. Os dados ficam salvos em um arquivo de texto (`data/carteira.txt`), então não precisa de internet.

O tema do trabalho é inclusão financeira, ligado à ODS 8.10 da ONU, que fala sobre ampliar o acesso a serviços financeiros.

Os preços são digitados à mão, então o resultado só é tão bom quanto os dados que o usuário coloca. O programa não substitui uma plataforma de investimentos nem a ajuda de um profissional, e não garante rendimento nenhum.

## 2. Público-alvo

- Pessoas que estão começando a investir e querem acompanhar seus ativos de um jeito simples;
- Quem controla uma carteira pequena por conta própria;
- Estudantes e projetos de educação financeira, para entender valor investido, valor atual e rentabilidade;
- Quem já tem um mínimo de familiaridade com o terminal.

## 3. Funcionalidades do sistema

O programa funciona por um menu numerado:

```text
=== CARTEIRA DE INVESTIMENTOS ===
1. Cadastrar ativo
2. Listar ativos
3. Valor total da carteira
4. Rentabilidade geral
5. Ordenar por rentabilidade
6. Simulador educativo
7. Relatorio final
0. Sair
```

- Cadastrar ativo: pede nome, categoria, quantidade, preço de compra e preço atual, e já salva no arquivo;
- Listar ativos: mostra quantidade, preço atual, valor atual e rentabilidade de cada um;
- Valor total da carteira: soma o valor atual de todos os ativos;
- Rentabilidade geral: calcula quanto a carteira ganhou ou perdeu em porcentagem, em relação ao que foi investido;
- Ordenar por rentabilidade: coloca os ativos do mais rentável para o menos rentável (Bubble Sort);
- Simulador educativo: compara poupança, Tesouro Selic e CDB em 12 meses, usando taxas mensais de exemplo (0,50%, 0,80% e 0,90%);
- Relatório final: mostra os ativos ordenados, o valor total, a rentabilidade geral, o lucro ou prejuízo e o impacto social do projeto;
- Salvar e carregar: os dados são lidos quando o programa abre e gravados ao cadastrar, ordenar e sair.

A carteira aceita até 100 ativos.

## 4. Tecnologias utilizadas no desenvolvimento

- Linguagem C
- struct, vetores e funções
- Arquivos de texto
- Bubble Sort
- Código dividido em módulos (`main`, `funcoes` e `modulo`)
- GCC e Dev-C++
- Git e GitHub

## 5. Requisitos mínimos para execução

- Windows, Linux ou macOS;
- Compilador C (GCC) ou o Dev-C++;
- Um terminal ou prompt de comando;
- Permissão para ler e gravar arquivos na pasta do projeto;
- Não precisa de internet.

## 6. Instruções para execução

1. Baixe ou clone o repositório e entre na pasta do projeto:

   ```bash
   git clone <URL-DO-REPOSITORIO>
   cd <NOME-DA-PASTA-DO-PROJETO>
   ```

2. Compile na pasta principal:

   ```bash
   gcc -Wall -Wextra -Iinclude src/main.c src/funcoes.c src/modulo.c -o programa
   ```

3. Execute também a partir da pasta principal, porque o programa procura o arquivo em `data/carteira.txt`:

   - Linux ou macOS: `./programa`
   - Windows: `programa.exe`

4. Digite o número da opção que quiser. A opção 0 salva e fecha o programa.

Também dá para abrir o arquivo `CarteiraDeInvestimentos.dev` no Dev-C++.

## Estrutura do projeto

```text
meu-projeto-c/
├── src/
│   ├── main.c
│   ├── funcoes.c
│   └── modulo.c
├── include/
│   ├── funcoes.h
│   └── modulo.h
├── data/
│   └── carteira.txt
└── README.md
```

- `main.c`: mostra o menu e chama as funções;
- `funcoes.c`: cadastro, listagem, arquivos, ordenação, simulador e relatório;
- `modulo.c`: os cálculos de valor total, rentabilidade e lucro;
- `funcoes.h`: protótipos, limite da carteira e taxas do simulador;
- `modulo.h`: a struct `Ativo` e os protótipos dos cálculos;
- `carteira.txt`: guarda os ativos no formato `nome;categoria;quantidade;compra;atual`.

## Limitações

- Os preços precisam ser atualizados manualmente;
- O programa ainda não valida o que é digitado. Letras no lugar de números podem travar o menu e valores negativos ou zero são aceitos;
- Não dá para editar nem excluir um ativo depois de cadastrado;
- As taxas do simulador são fixas e só servem de exemplo.

## Vídeo de demonstração

https://youtu.be/__VVRqhtYfk?si=mDyRX7TALiwTOeTh

## 7. Desenvolvedores

| Nome | RGM |
|------|-----|
| Gabriel Medeiro Freitas | 47803878 |
| Kerollyn Monteiro Costa | 47778831 |
| Giovanna Lopes de Carvalho | 46663061 |
| Arthur Nascimento | 47359412 |
