# Noxious SRC
---
Autor: Noxious

📑 INTRODUÇÃO:
Este MOD adiciona uma nova entrada na database de monstros com o nome 'HatEffect' que permite exibir qualquer hateffect em qualquer monstro presente na database.

⚙️ FUNCIONAMENTO:
Simplesmente adicionando a nova coluna HatEffect <ID> à estrutura de um monstro no mob_db é possível exibir um hateffect presente no emulador e funcionando nas lua files do monstro.

Da pra mudar o efeito sem a necessidade de reiniciar o servidor, embora seja recomendado qualquer alteração na database reiniciar ao invés de dar reload, a menos em caso de debug ai de boa, mas em servidor em produção jamais.

Body:  
  - Id: 1002  
    AegisName: PORING  
    Name: Poring  
    Level: 1  
    Hp: 50  
    Sp: 1  
    BaseExp: 2  
    JobExp: 1  
    Attack: 7  
    Attack2: 10  
    Defense: 0  
    MagicDefense: 5  
    #TODOS OS OUTROS ATRIBUTOS DO MOB#
    HatEffect: 1  # HAT_EF_BLOSSOM_FLUTTERING
	
Os hateffects são definidoss aqui src/map/script.hpp 
Exemplos
1 = HAT_EF_BLOSSOM_FLUTTERING
2 = HAT_EF_MERMAID_LONGING
5 = HAT_EF_CLOCKING
6 = HAT_EF_SNOW
14 = HAT_EF_ELECTRIC
15 = HAT_EF_GREEN_FLOOR

- **NÃO** me responsabilizo por  quaisquer danos ao seu projeto devido ao uso de nossos sistemas. As modificaçõesbpodem conter bugs e casos de incompatibilidade com  outros  SRC.
