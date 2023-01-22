ref kpNestedTesterStore<NestLevel_8> nestedTester;

// Missionbase runs early on both server and client and so is a good place to instantiate the config objects
modded class MissionBase
{
	override void OnMissionLoaded()
	{
		super.OnMissionLoaded();
		Print("[Missionbase]:: OnMissionLoaded(): Initializing KPConfig.");
		
		// consider whether this should only run on the client and only after the player is created.
		nestedTester = new kpNestedTesterStore<NestLevel_8>("TestNestData", new NestLevel_8("default data"));  

	}
	
}
