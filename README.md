# 🦇 Óculos com Sensor Ultrassônico — Detecção de Obstáculos

Projeto desenvolvido na faculdade utilizando **`Arduino`**, sensor ultrassônico **`HC-SR04`** e **`Buzzer`**, programado em **`C++`**.

O dispositivo, acoplado a um óculos, detecta obstáculos à frente do usuário e emite alertas sonoros conforme a distância, inspirado na ecolocalização dos morcegos. Trata-se de uma solução simples, de baixo custo e com potencial aplicação em acessibilidade e robótica.

## 🖼️ Conceito de Funcionamento

O sensor emite ondas ultrassônicas que, ao atingirem um objeto, retornam ao dispositivo. O Arduino calcula a distância com base no tempo de ida e volta e aciona o buzzer para alertar o usuário.

<img src="/images/conceito.jpeg">

## 🔧 Protótipo Desenvolvido

O hardware foi montado diretamente na estrutura de um óculos, tornando o sistema vestível e funcional.

<img src="/images/projeto.jpeg">

## 👨‍🎓 Apresentação do Projeto

Registro da apresentação do dispositivo em ambiente acadêmico.

<img src="/images/equip.jpeg">

## ⚙️ Componentes Utilizados

- Arduino Uno (ou compatível)
- Sensor ultrassônico HC-SR04
- Buzzer
- Jumpers e protoboard
- Estrutura de óculos

## 🚀 Funcionamento

1. O sensor detecta obstáculos à frente

2. A distância é calculada pelo Arduino

3. O buzzer emite alertas sonoros

4. Quanto mais próximo o objeto, mais rápido o som