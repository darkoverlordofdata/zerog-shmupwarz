using entitas;
namespace systems {
	/**
	* game systems
	*/
	public class AnimationSystem : System {

		public AnimationSystem(Game game, Factory world) {

			var tweens = world.getGroup(Matcher.AllOf({Components.TweenComponent}));
			
			execute = (delta) => {
				foreach (var entity in tweens.entities) {
					if (entity.isActive()) {
						var x = entity.scale.x + (entity.tween.speed * delta);
						var y = entity.scale.y + (entity.tween.speed * delta);
						var active = entity.tween.active;

						if (x > entity.tween.max) {
							x = entity.tween.max;
							y = entity.tween.max;
							active = false;
						} else if (x < entity.tween.min) {
							x = entity.tween.min;
							y = entity.tween.min;
							active = false;
						}
						
						entity.scale.x = (float)x; 
						entity.scale.y = (float)y;
						entity.tween.active = active;
					}
				}
			};
		}
	}
} 




