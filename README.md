# RocketFly
## Description

Completed as part of a test task. Tasks:
- Create Pawn
- Implement a multi-stage rocket using a scene component
- The rocket must release stages using the spacebar button
- Use Z and X to add thrust adjustment from 0 to 100.
- The entire rocket must correspond to the actions of physical forces on each part.
- Standard UE primitives can be used as a housing
 
 ## Control

 | Action | Key |
|----------|----------|
| Z		 | Decrease Traction   | 
| X			| Add Traction   |
| Space   | Next Step  | 

## Implemented

| Object | Description |
|----------|----------|
| BP_Rocket	 |A pawn in which the scene component is attached. Added input. Implemented an interface for communicating with the camera.   | 
| BP_RocketSceneComponent	| The component in which the rocket itself is implemented. The rocket will spawn from the structure involved in BP_Rocket.   |
| BP_RocketStaticMeshComponent   | A component that has the weight of the capsule and the weight of the fuel. He himself counts the remaining fuel.  | 
| BP_RocketPlayerController   | Communication with widget, camera spawn.  |
| BP_RocketCameraSystem   | Camera with smooth following of the pawn. |
| WBP_RocketUI   | Rocket UI info.  |
| BPI_CameraInterface   | Ñommunication between actor and camera manager.  |
| MassFlowCurve   | Fuel consumption depending on traction.  |
| Struct_StepInfo   | Structure for step info.  |