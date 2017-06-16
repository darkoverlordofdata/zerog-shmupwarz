using entitas;
namespace systems {
	/**
	* game systems
	*/
	public class CollisionSystem : System {
		public CollisionSystem(Game game, Factory world) {

			Group? bullets = null;
			Group? enemies = null;

			initialize = () => {
				bullets = world.getGroup(Matcher.AllOf({ Components.BulletComponent }));
				enemies = world.getGroup(Matcher.AnyOf({
					Components.Enemy1Component, 
					Components.Enemy2Component, 
					Components.Enemy3Component
				}));
			};

			/**
			* physics system
			* model movement
			*/
			execute = (delta) => {
				foreach (var enemy in enemies.entities) {
					if (enemy.isActive()) {
						foreach (var bullet in bullets.entities) {
							if (bullet.isActive()) {
								if (bullet.bounds.is_intersecting(enemy.bounds)) {
									var x = (int)((float)bullet.position.x);
									var y = (int)((float)bullet.position.y);
									world.bang(x, y);
									world.deleteEntity(bullet);
									for (var i=0; i<3; i++) 
										world.particle(x, y);
									if (enemy.health != null) {
										var current = enemy.health.current - 2;
										if (current < 0) {
											world.explosion(x, y);
											world.deleteEntity(enemy);
										} else {
											enemy.health.current = current;
										}
									} 
									return;
								}
							}
						}
					}
				}
			};
		}
	}
}			
