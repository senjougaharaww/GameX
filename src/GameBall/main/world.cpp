#include "GameBall/main/world.h"

namespace GameBall {

World::World(GameX::Base::Core *core) : Module(core) {
  LAND_INFO("Game world created...");
  scene_ = core->AnimationManager()->CreateScene();
  camera_ = scene_->CreateCamera(glm::vec3{0.0f, 0.0f, 3.0f},
                                 glm::vec3{0.0f, 0.0f, 0.0f}, 45.0f, 1.0f, 0.1f,
                                 100.0f);
  core->AnimationManager()->SetPrimarySceneCamera(scene_, camera_);
}

World::~World() {
  camera_->Release();
  scene_->Release();
  LAND_INFO("Game world released...");
}

void World::Update() {
  ;
}

}  // namespace GameBall