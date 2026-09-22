# Programas em C

Este projeto contem tres programas independentes. Os comandos abaixo devem ser executados no PowerShell, a partir da pasta raiz do projeto:

```powershell
cd C:\Users\Dinis\UPCA_C
```

E necessario ter o GCC instalado e disponivel no `PATH`.

## LeituraDimensoes

Le a altura e a largura de um retangulo e calcula a area e o perimetro.

```powershell
gcc .\LeituraDimensoes\LeituraDimensoes.c -o .\LeituraDimensoes\LeituraDimensoes.exe
.\LeituraDimensoes\LeituraDimensoes.exe
```

Introduza a altura e a largura quando forem pedidas.

## Retangulo

Calcula a area e o perimetro usando os valores definidos no codigo.

```powershell
gcc .\Retangulo\Retangulo.c -o .\Retangulo\Retangulo.exe
.\Retangulo\Retangulo.exe
```

## Calculadora

Le dois valores e mostra a soma, a multiplicacao, a subtracao e a divisao. A divisao por zero e tratada sem terminar com erro.

```powershell
gcc .\Calculadora\Calculadora.c -o .\Calculadora\Calculadora.exe
.\Calculadora\Calculadora.exe
```

Introduza os valores pedidos. Para executar novamente sem alterar o codigo, basta usar o segundo comando de cada secao.

## Executar pelo VS Code

No VS Code, abra **Run and Debug**, escolha **Executar Calculadora** e carregue em iniciar. Esta configuracao recompila automaticamente a calculadora antes de a executar.
