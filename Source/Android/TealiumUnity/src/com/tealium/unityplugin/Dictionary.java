package com.tealium.unityplugin;

import java.util.HashMap;
import java.util.Map;

public class Dictionary extends HashMap<String, String> {
	private static final long serialVersionUID = 4498755694764519570L;

	public Dictionary() {
		super();
	}

	public Dictionary(int capacity, float loadFactor) {
		super(capacity, loadFactor);
	}

	public Dictionary(int capacity) {
		super(capacity);
	}

	public Dictionary(Map<? extends String, ? extends String> map) {
		super(map);
	}
	
	public void set(String key, String value) {
		this.put(key,  value);
	}
}
