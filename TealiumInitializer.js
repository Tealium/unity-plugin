#pragma strict

function Awake() {
	Tealium.Initialize("tealiummobile", "demo", "dev", 
		new Tealium.Config()
			.SilenceLogs(false));
}

function Start() {
	var data = new Dictionary.<String, String>(2);
	data["custom_alpha"] = "alpha";
	data["custom_beta"] = "beta";
	
	Tealium.TrackView("First Level", data);
	
}