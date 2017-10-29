
##############################
# Country definition for MON #
##############################

province =
{ id       = 1404
  air_base = { size = 1 current_size = 1 }
}            # Ulan Bator

#####################
# Country main data #
#####################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 10
  consumer = 0.2000 
  supply = 0.0880 
  production = 0.7120 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 6.9 # 7 - building queue
  capital                = 1404
  diplomacy =
  { relation = { tag = CHC value = 25 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1207 1398 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  blueprints             = { 6210 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }
  landunit =
  { location = 1404
    name     = "Armija Mongol Nayramdakh"
    id       = { type = 30500 id = 1 }
    division =
    { id    = { type = 30500 id = 2 }
      name  = "1. Mongol Strelkovaya Div."
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30500 id = 3 }
      name = "2. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
    }
    division =
    { id   = { type = 30500 id = 4 }
      name = "3. Nayramdakh Opolcheniya Div."
      type = militia
    }
    division =
    { id   = { type = 30500 id = 5 }
      name = "4. Nayramdakh Opolcheniya Div."
      type = militia
    }
  } 
	province_development = { 
		id = { type = 30500 id = 6 } 
		name = "" 
		progress = 0.0000 
		location = 1404 
		cost = 2.0000 
		date = { 
			year = 1952 
			month = december 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 3362 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
