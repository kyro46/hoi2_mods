
##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.4000 
  supply = 0.2000 
  production = 0.4000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1453
  manpower               = 9.9 # 10 - building queue
# Test
# free                   = { ic = 100 energy = 200 metal = 100 rare_materials = 50 oil = 20 supplies = 50 money = 10 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 2150 2290 1010 1190 5080 }
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453
				1442 1443 1444 #Amdo
				1282 #Eastern Kham (optional, half-national: Ya'an 1281)
				1877 1878 1454 1284 #South Tibet (optional, half-national: Dimapur 1284)
				 }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }
  # GW Cavalry
  landunit =
  { location = 1453
    name     = "Xi'zang Jüntuan 1"
    id       = { type = 10700 id = 1 }
    division =
    { id    = { type = 10700 id = 2 }
      name  = "1 Xi'zang Shi"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 10700 id = 3 }
      name = "10 Xi'zang Lü"
      type = militia
    }
    division =
    { id   = { type = 10700 id = 4 }
      name = "17 Xi'zang Lü"
      type = militia
    }
  } 
	province_development = { 
		id = { type = 10700 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1453 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = april 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2914 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
