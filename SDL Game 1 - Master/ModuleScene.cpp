#include "ModuleScene.h"
#include "ModuleTextures.h"
#include "Application.h"

ModuleScene::ModuleScene()
{
}


ModuleScene::~ModuleScene()
{
}

bool ModuleScene::Init() {
	App->textures->Load("")
}

bool ModuleScene::CleanUp() {
	
}

update_status ModuleScene::PreUpdate() {
	return UPDATE_CONTINUE;

}

update_status ModuleScene::Update()
{

	return UPDATE_CONTINUE;
}

update_status ModuleScene::PostUpdate() {
	return UPDATE_CONTINUE;
}