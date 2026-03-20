Óculos inteligentes com sensor ultrassônico 👓📡
Um dispositivo de assistência simples construído com Arduino (C++) que usa um sensor ultrassônico para detectar obstáculos e alertar o usuário através de um sistema de som da campainha.

O sistema altera o padrão sonoro com base na distância, ajudando o usuário a entender o quão próximo um objeto está.

Este projeto foi criado para propósitos de aprendizagem para praticar sistemas embarcados, integração de sensores e feedback em tempo real.

Tecnologias Utilizadas
Arduino / C++
Sensor ultrassônico (HC-SR04)
Campainha
PWM (tom)
Monitor serial
Visão geral do projeto
O dispositivo funciona como um básico protótipo de óculos inteligentes assistivos:

Detecta obstáculos na frente do usuário
Calcula a distância usando ondas ultrassônicas
Converte distância em feedback sonoro
Alerta o usuário com diferentes padrões de bipe
Componentes
Placa Arduino
Sensor ultrassônico (HC-SR04)
Campainha
Fios de ligação
Fonte de alimentação
Configuração do pino
const int pinoBuzzer = 2;
const int triggerPin = 5;
const int echoPin = 7;
Como funciona
O sensor ultrassônico envia um sinal
O sinal reflete em um objeto
O sistema calcula a distância em centímetros
A campainha muda seu comportamento com base na distância
Lógica de Distância
Distância	Comportamento
≤ 5 cm	Som contínuo (muito próximo)
5–20 cm	Bip rápido
20–40 cm	Bip médio
40–50 cm	Bip lento
> 50 cm	Sem som
Funções principais
Leitura à distância
readUltrasonicDistance(triggerPin, echoPin)
Responsável por enviar e receber o sinal ultrassônico.

Feedback sonoro
tone()→ ativa a campainha
noTone()→ para o som
Comportamento em loop
Continuamente:

Lê distância
Imprime valor no Serial Monitor
Ajusta o padrão sonoro
Exemplo de saída
25 cm
Destaques do código
Cálculo de distância em tempo real
Lógica condicional para padrões sonoros
Integração de sensores ultrassônicos
Sistema de feedback usando campainha
Lógica incorporada simples e eficiente
Possíveis melhorias
Adicione motor de vibração para feedback silencioso
Melhore a precisão com filtragem
Adicione sistema de bateria para portabilidade
Integrar com armação vestível (óculos reais)
Adicione Bluetooth ou integração móvel
Objetivos de aprendizagem
Este projeto foi criado para praticar:

Programação incorporada com Arduino
Integração de sensores (ultrassônicos)
Controle do atuador (campainha)
Tomada de decisão em tempo real
Conceitos de tecnologia assistiva
Autor
Luis Filippe Reis Nogueira | Analise Correa Garcia Ângelo | Pedro Fonseca | Pedro Martinho
