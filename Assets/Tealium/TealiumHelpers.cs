using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Linq;

public class TealiumHelpers {

    public static Dictionary<string, object> ConvertValuesToCollections(Dictionary<string, object> dictionary)
    {
        Dictionary<string, object> result = new Dictionary<string, object>();
        foreach (KeyValuePair<string, object> entry in dictionary)
        {
            result[entry.Key] = ToCollections(entry.Value);
        }
        return result;
    }

    public static object ToCollections(object o)
    {
        if (o is JObject jo) return jo.ToObject<IDictionary<string, object>>().ToDictionary(k => k.Key, v => ToCollections(v.Value));
        if (o is JArray ja) return ja.ToObject<List<object>>().Select(ToCollections).ToList();
        return o;
    }
}