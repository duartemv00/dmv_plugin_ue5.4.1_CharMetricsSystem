// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/ANDrawWeapon.h"
#include "Items/Weapons/ParentWeapon.h"

void UANDrawWeapon::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	AActor* PlayerRef = MeshComp->GetOwner();

	// Code to draw weapon
	if(UChildActorComponent* WeaponActor = PlayerRef->FindComponentByClass<UChildActorComponent>())
	{
		
		if(WeaponActor->GetAttachSocketName() == BodySocket)
		{
			WeaponActor->AttachToComponent(MeshComp, FAttachmentTransformRules::SnapToTargetIncludingScale, HandSocket);
		}
		else if(WeaponActor->GetAttachSocketName() == HandSocket || WeaponActor->GetAttachSocketName() == FName("None"))
		{
			WeaponActor->AttachToComponent(MeshComp, FAttachmentTransformRules::SnapToTargetIncludingScale, (BodySocket));
		}
	}
}
