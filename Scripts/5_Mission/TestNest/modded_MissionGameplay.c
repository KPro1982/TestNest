modded class MissionGameplay
{   
// This runs on the client	
	
	override void OnUpdate(float timeslice)
	{        		
		super.OnUpdate(timeslice);		
		if ( GetGame().GetInput().LocalPress("TNActionName") && GetGame().GetUIManager().GetMenu() == NULL ) 
		{				
			Print(string.Format("Key pressed!"));	// delete after test		
			nestedTester.GetData().PrintData();	
			nestedTester.GetData().Add("data sent from client");
			nestedTester.GetData().Add("Second set of data sent from client");
			nestedTester.SaveFile();
			nestedTester.GetData().PrintData();														
		}
			
	}
		
}
