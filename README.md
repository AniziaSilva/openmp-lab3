
# Laboratório 3 - Computação Paralela e Distribuída

Este repositório contém os arquivos para o laboratório de análise de desempenho usando OpenMP e Intel VTune Profiler.

## Códigos
- `mult-sync.c`: Implementação paralela com sincronização excessiva (ineficiente)
- `mult-redux.c`: Implementação com paralelismo e redução manual
- `mult-good.c`: Implementação otimizada com paralelismo eficiente

## Compilação
```bash
gcc -fopenmp -g mult-sync.c -o mult-sync
gcc -fopenmp -g mult-redux.c -o mult-redux
gcc -fopenmp -g mult-good.c -o mult-good
```

## Execução
```bash
./mult-sync
./mult-redux
./mult-good
```

## Análise com Intel VTune (CLI)
```bash
vtune -collect hotspots -result-dir r_sync ./mult-sync
vtune -collect threading -result-dir r_good ./mult-good
```


