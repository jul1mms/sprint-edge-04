# sprint-edge-04

Guilherme Faustino Vargas RM 98278  
Gustavo Kenzo Ozeki RM 98481  
João Pedro Marques Rodrigues RM 98307  
Júlia Masson RM 98134  
Vitor Shimizu RM 550390  

# ECOBUILD - Monitoramento de Temperatura e Umidade para Prédios Sustentáveis
A ECOBUILD é uma empresa dedicada não apenas a ampliar o mercado de construções sustentáveis no Brasil, mas também a simplificar todo o processo, desde a concepção inicial até a fase pós-construção e a obtenção do certificado Green Building. Um dos critérios fundamentais para atingir esse objetivo é a manutenção rigorosa da temperatura e umidade em níveis ideais, garantindo um ambiente confortável e benéfico para a saúde. Com isso em mente, a ECOBUILD desenvolveu um sensor baseado em IoT, que visa ajudar seus clientes a alcançar as metas estipuladas pelo certificado de forma eficaz e eficiente.

## Arquitetura IoT
A arquitetura IoT proposta para o sistema de monitoramento de temperatura e umidade agora utiliza apenas um Arduino Uno, sem a necessidade de um módulo ESP. Os dados coletados pelo Arduino são enviados diretamente para o Node-RED, que, por sua vez, encaminha as informações para a plataforma Tago.io.

## IoT Devices
Dispositivos físicos que coletam dados de temperatura e umidade.

1. **Arduino Uno com Sensor DHT11:** O Arduino Uno atua como o controlador principal para coletar dados de temperatura e umidade usando o sensor DHT11. O Arduino deve ser conectado a uma fonte de energia confiável.

## Componente Back-End
O back-end é responsável pelo processamento e armazenamento dos dados coletados pelos dispositivos IoT.

1. **Plataforma IoT (Tago.io):** O Tago.io é usado como plataforma IoT para receber os dados do sensor Arduino Uno e armazená-los em um banco de dados. Configure a integração com o Node-RED para receber dados do Arduino.  
2. **Node-RED:** O Node-RED é usado como middleware para processar e analisar os dados recebidos do sensor Arduino Uno. Configure fluxos de trabalho no Node-RED para analisar os valores de temperatura e umidade em relação aos limites especificados.  
3. **Banco de Dados:** Armazena os dados coletados em um banco de dados seguro e escalável. Pode usar serviços de banco de dados, como MongoDB ou MySQL.  
4. **Lógica de Alerta:** Configurações e regras no Node-RED para detectar valores fora dos limites adequados e acionar alertas, como e-mails ou notificações push, quando isso ocorrer.

## Componente Front-End
O front-end permite que os usuários visualizem e gerenciem os dados coletados pelos dispositivos IoT.

1. **Interface Web:** Interface web amigável acessível por meio do site ou aplicativo da Ecobuild. Esta interface deve permitir aos usuários ver os dados de temperatura e umidade em tempo real, bem como o histórico de dados.
2. **Regras de Visualização:** Gráficos e tabelas que exibem os dados de temperatura e umidade de forma clara e compreensível através do uso cores e alertas visuais para indicar quando os valores estão fora dos limites adequados.
3. **Alertas de Usuário:** Notificações e alertas visuais para os usuários quando os valores de temperatura e umidade estiverem fora dos limites, destacando a importância da ação imediata.

# Instruções de Uso
• Para os prédios que fecharem negócios através do site/app da Ecobuild, a empresa fornecerá os dispositivos Arduino Uno e o sensor DHT11 pré-configurados.  
• Os prédios devem conectar o Arduino Uno aos seus sistemas de energia e Wi-Fi.  
• A configuração inicial do dispositivo IoT incluirá a seleção dos limites de temperatura e umidade desejados.  
• Os dados coletados pelo Arduino Uno serão automaticamente enviados para a plataforma Tago.io.  
• Os usuários poderão acessar a interface web da Ecobuild para monitorar os dados e receber alertas, conforme necessário.

# Requisitos e Dependências
• Arduino Uno com Sensor DHT11 (fornecido pela Ecobuild).  
• Plataforma IoT (Tago.io).  
• Node-RED para processamento de dados.  
• Servidor de Banco de Dados (MongoDB, MySQL, etc.).  
• Desenvolvimento de Interface Web (HTML, CSS, JavaScript).  
• Servidor Web para hospedar a interface.  
• Conexão de Internet confiável no prédio verde.  

Esta solução permitirá que os prédios verdes monitorados pelo Ecobuild cumpram regulamentações necessárias de edifícios verdes, garantindo um ambiente saudável e sustentável para seus ocupantes. Além disso, ajuda a demonstrar o compromisso da Ecobuild com a construção sustentável e a preservação ambiental.
