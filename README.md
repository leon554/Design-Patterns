A C++ fishing regulation management system that lets anglers log catches and 
validates them against species-specific keeping rules. Built to demonstrate 
practical application of object-oriented design patterns.

## Design Patterns

- **Facade** — `CommunicationFacade` provides a unified interface to the 
  creature and angler subsystems, hiding internal coordination from the client.
- **Factory** — `SeaCreatureFactory` and `SeaCheckerFactory` abstract the 
  construction of concrete creature and checker types.
- **Builder** — `SeaCreatureBuilder` constructs `SeaCreature` objects 
  step-by-step with chained setters.
- **Mediator** — `AnglerEngine` and `SeaPlusPlusEngine` coordinate interactions 
  between subsystem components without coupling them directly.
  
<img width="1627" height="1194" alt="part3_UML" src="https://github.com/user-attachments/assets/56c13362-9697-43be-84ae-925b9b11a02d" />
