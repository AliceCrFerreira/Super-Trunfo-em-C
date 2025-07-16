# Desafio Nível Mestre - Super Trunfo em C

## 🎮 Descrição do Desafio
Este é o desafio final do Super Trunfo! O objetivo é implementar comparações avançadas entre cartas de países utilizando **C**. Aqui, você integrará tudo o que aprendeu sobre estruturas de decisão, criando um jogo dinâmico, robusto e interativo.

## ✅ Requisitos Funcionais

### 1. Escolha de Dois Atributos
- O jogador deve escolher **dois atributos numéricos diferentes** para comparação das cartas através de **menus interativos**.
- O jogador **não pode escolher o mesmo atributo duas vezes**.

### 2. Comparação com Múltiplos Atributos
- Para cada atributo:
  - **Ganha quem tiver o maior valor**, exceto para **Densidade Demográfica**, onde vence quem tiver o **menor valor**.

### 3. Soma dos Atributos
- Após as comparações individuais, o sistema deve somar os dois valores comparados de cada carta.
- A carta com **a maior soma** vence.

### 4. Tratamento de Empates
- Se as somas dos atributos forem iguais, deve-se exibir a mensagem:
Empate 


### 5. Menus Dinâmicos
- O menu deve ser implementado com **switch**.
- Após a escolha do primeiro atributo, o sistema deve **remover a opção escolhida** do menu do segundo atributo.

### 6. Exibição Clara do Resultado
A exibição final deve conter:
- Nome dos dois países.
- Os dois atributos escolhidos.
- Valores de cada atributo para cada carta.
- Soma dos atributos para cada carta.
- Resultado final: qual carta venceu ou se houve empate.

---

## 🔧 Requisitos Não Funcionais
- **Usabilidade:** Interface intuitiva e fácil de navegar.
- **Performance:** Sistema deve responder rapidamente.
- **Manutenibilidade:** Código organizado, indentado e bem comentado.
- **Confiabilidade:** Lidar com entradas inválidas, utilizando o **default** no switch para tratar opções incorretas.

---

## 🚨 Simplificações Permitidas
- Cartas podem ser as **pré-cadastradas dos desafios anteriores**.
- Comparação limitada a **apenas duas cartas**.
- Foco na integração de:
  - Menus dinâmicos com **switch**.
  - Comparações com **if-else aninhados**.
  - Uso do **operador ternário**.
  - **Cálculo da soma** e tratamento de empates.

---
Exemplo de execução:

===== CARTA SUPER TRUNFO =====                                                                                          Pais: Brasil                                                                                                            Populacao: 203000000                                                                                                    Area: 8516000.00 km^2                                                                                                   PIB: R$ 1075200000000.00                                                                                                Pontos Turisticos: 7                                                                                                    Densidade Demografica: 23.84 hab/km^2                                                                                   Renda per capita: R$ 5296.55                                                                                            ===== CARTA SUPER TRUNFO =====                                                                                          Pais: Australia                                                                                                         Populacao: 26000000                                                                                                     Area: 7692000.00 km^2                                                                                                   PIB: R$ 1550000062464.00                                                                                                Pontos Turisticos: 6                                                                                                    Densidade Demografica: 3.38 hab/km^2                                                                                    Renda per capita: R$ 59615.39                                                                                                                                                                                                                   ===== MENU DE ATRIBUTOS =====                                                                                           Escolha o atributo para comparar:                                                                                       1. Populacao                                                                                                            2. Area                                                                                                                 3. PIB                                                                                                                  4. Pontos Turisticos                                                                                                    5. Densidade Demografica                                                                                                6. Renda per capita                                                                                                     Digite sua opcao (1-6): 1                                                                                                                                                                                                                       ===== ESCOLHA O SEGUNDO ATRIBUTO =====                                                                                  Escolha outro atributo para comparar:                                                                                   2. Area                                                                                                                 3. PIB                                                                                                                  4. Pontos Turisticos                                                                                                    5. Densidade Demografica                                                                                                6. Renda per capita                                                                                                     Digite sua opcao (1-6, diferente do primeiro): 3                                                                                                                                                                                                ===== COMPARAÃ├O MESTRE =====                                                                                                                                                                                                                   Atributo 1: Populacao                                                                                                           Brasil: 203000000.00 | Australia: 26000000.00                                                                                   => Brasil venceu o atributo!                                                                                                                                                                                                    Atributo 3: PIB                                                                                                                 Brasil: 1075200000000.00 | Australia: 1550000062464.00                                                                          => Australia venceu o atributo!                                                                                                                                                                                                 Soma dos atributos:                                                                                                             Brasil: 203000000.00                                                                                                    Australia: 1550000062464.00                                                                                                                                                                                                             RESULTADO FINAL:                                                                                                                         Australia venceu a rodada!                                                                                                                                                                                                                                                                                                                             === OBRIGADO POR JOGAR ===                                                                                                                                                                                                                      Process returned 0 (0x0)   execution time : 9.072 s                                                                     Press any key to continue. 
