# Animation Manager

The Animation Manager system (```animation_manager.h```) is the system that is gonna manager state changers for objects and will control which animation to use from the Objects sprite sheet. I might add an sprite sheet handler when loading a sprite sheet that will break it down into animation frames, although this may be unnesseccary?.

## States

States will be the core component of the animation manager. States will have a name or ID based on what set of animation frames the State is for. 

## Anim_Manager

Based on any given input will manage the state flow-chart and control which animation state the ```Object::Object ``` is in.
When Update is called on an object, the ```Anim_Manager``` has to make sure that the sprite clipping rect is on the right section of the texture which has the animation.