define({ "api": [
  {
    "type": "get",
    "url": "/stats/flows",
    "title": "Get all the traffic flow statistic.",
    "name": "GetFlows",
    "group": "Stats",
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X GET http://127.0.0.1:9999/stats/flows",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK\n[\n {\"byte_count\":0,\"direction\":\"uplink\",\"duration_sec\":2098,\"in_port\":2,\"packet_count\":0,\"priority\":1,\"table_id\":0},\n {\"byte_count\":0,\"direction\":\"downlink\",\"duration_sec\":2098,\"in_port\":1,\"packet_count\":0,\"priority\":1,\"table_id\":0}\n]",
          "type": "json"
        }
      ]
    },
    "version": "0.0.0",
    "filename": "src/north_api/stats_rest_calls.cc",
    "groupTitle": "Stats"
  },
  {
    "type": "post",
    "url": "/ue",
    "title": "Add UE context.",
    "name": "AddUE",
    "group": "User",
    "parameter": {
      "fields": {
        "Parameter": [
          {
            "group": "Parameter",
            "type": "Number",
            "optional": false,
            "field": "eps_bearer_id",
            "description": "<p>EPS bearer ID</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "imsi",
            "description": "<p>IMSI</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "s1_ul_teid",
            "description": "<p>S1 downlink tunnel ID</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "s1_dl_teid",
            "description": "<p>S1 uplink tunnel ID</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "ue_ip",
            "description": "<p>IP address of UE</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "enb_ip",
            "description": "<p>IP address of eNodeB</p>"
          }
        ]
      }
    },
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X POST http://127.0.0.1:9999/ue -d '{\"eps_bearer_id\":1, \"imsi\":\"208950000000009\", \"s1_ul_teid\":\"0x3\", \"s1_dl_teid\":\"0x4\", \"ue_ip\":\"172.16.0.2\", \"enb_ip\":\"192.168.0.3\"}'",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK",
          "type": "json"
        }
      ]
    },
    "error": {
      "fields": {
        "Error 4xx": [
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "BadRequest",
            "description": "<p>Payload format error or empty.</p>"
          },
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "ServiceUnavailable",
            "description": "<p>Switch connection lost.</p>"
          }
        ]
      }
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "delete",
    "url": "/ue/:id",
    "title": "Remove one specific UE context.",
    "name": "DeleteUE",
    "group": "User",
    "parameter": {
      "fields": {
        "Parameter": [
          {
            "group": "Parameter",
            "type": "Number",
            "optional": false,
            "field": "id",
            "description": "<p>UE id (EPS bearer id) of the user</p>"
          }
        ]
      }
    },
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X DELETE http://127.0.0.1:9999/ue/1",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK",
          "type": "json"
        }
      ]
    },
    "error": {
      "fields": {
        "Error 4xx": [
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "ServiceUnavailable",
            "description": "<p>Switch connection lost.</p>"
          }
        ]
      }
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "delete",
    "url": "/ue",
    "title": "Remove all UE context.",
    "name": "DeleteUEs",
    "group": "User",
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X DELETE http://127.0.0.1:9999/ue",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK",
          "type": "json"
        }
      ]
    },
    "error": {
      "fields": {
        "Error 4xx": [
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "ServiceUnavailable",
            "description": "<p>Switch connection lost.</p>"
          }
        ]
      }
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "get",
    "url": "/ue/:id",
    "title": "Get one specific UE context.",
    "name": "GetUE",
    "group": "User",
    "parameter": {
      "fields": {
        "Parameter": [
          {
            "group": "Parameter",
            "type": "Number",
            "optional": false,
            "field": "id",
            "description": "<p>UE id (EPS bearer id) of the user</p>"
          }
        ]
      }
    },
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X GET http://127.0.0.1:9999/ue/1",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK\n[\n {\"enb_ip\":\"192.168.0.3\",\"imsi\":\"208950000000009\",\"s1_dl_teid\":4,\"s1_ul_teid\":3,\"ue_id\":1,\"ue_ip\":\"172.16.0.1\"}\n]",
          "type": "json"
        }
      ]
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "get",
    "url": "/ue",
    "title": "Get all UE context.",
    "name": "GetUEs",
    "group": "User",
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X GET http://127.0.0.1:9999/ue",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK\n[\n {\"enb_ip\":\"192.168.0.3\",\"imsi\":\"208950000000009\",\"s1_dl_teid\":4,\"s1_ul_teid\":3,\"ue_id\":1,\"ue_ip\":\"172.16.0.1\"},\n {\"enb_ip\":\"192.168.0.3\",\"imsi\":\"208950000000001\",\"s1_dl_teid\":2,\"s1_ul_teid\":1,\"ue_id\":2,\"ue_ip\":\"172.16.0.2\"}\n]",
          "type": "json"
        }
      ]
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "post",
    "url": "/ue/redirect/:id",
    "title": "Redirect specific traffic flow for one UE.",
    "name": "RedirectUE",
    "group": "User",
    "parameter": {
      "fields": {
        "Parameter": [
          {
            "group": "Parameter",
            "type": "Number",
            "optional": false,
            "field": "id",
            "description": "<p>UE id (EPS bearer ID)</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "s1_ul_teid",
            "description": "<p>S1 downlink tunnel ID</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "s1_dl_teid",
            "description": "<p>S1 uplink tunnel ID</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "ue_ip",
            "description": "<p>IP address of UE</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "enb_ip",
            "description": "<p>IP address of eNodeB</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "from",
            "description": "<p>where the to-be-redirected traffic is coming from</p>"
          },
          {
            "group": "Parameter",
            "type": "String",
            "optional": false,
            "field": "to",
            "description": "<p>where the to-be-redirected traffic is going to</p>"
          }
        ]
      }
    },
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X POST http://127.0.0.1:9999/ue/redirect/1 -d '{\"s1_ul_teid\":\"0x3\", \"s1_dl_teid\":\"0x4\", \"ue_ip\":\"172.16.0.2\", \"enb_ip\":\"192.168.0.3\", \"from\":\"192.168.12.3\", \"to\":\"192.168.12.1\"}'",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK",
          "type": "json"
        }
      ]
    },
    "error": {
      "fields": {
        "Error 4xx": [
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "BadRequest",
            "description": "<p>Payload format error or empty.</p>"
          },
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "ServiceUnavailable",
            "description": "<p>Switch connection lost.</p>"
          }
        ]
      }
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  },
  {
    "type": "delete",
    "url": "/ue/redirect/:id",
    "title": "Remove the redirect flow for one UE.",
    "name": "RemoveRedirectUE",
    "group": "User",
    "parameter": {
      "fields": {
        "Parameter": [
          {
            "group": "Parameter",
            "type": "Number",
            "optional": false,
            "field": "id",
            "description": "<p>UE id (EPS bearer id) of the user</p>"
          }
        ]
      }
    },
    "examples": [
      {
        "title": "Example usage:",
        "content": "curl -X DELETE http://127.0.0.1:9999/ue/redirect/1",
        "type": "json"
      }
    ],
    "success": {
      "examples": [
        {
          "title": "Success-Response:",
          "content": "HTTP/1.1 200 OK",
          "type": "json"
        }
      ]
    },
    "error": {
      "fields": {
        "Error 4xx": [
          {
            "group": "Error 4xx",
            "optional": false,
            "field": "ServiceUnavailable",
            "description": "<p>Switch connection lost.</p>"
          }
        ]
      }
    },
    "version": "0.0.0",
    "filename": "src/north_api/ue_rest_calls.cc",
    "groupTitle": "User"
  }
] });