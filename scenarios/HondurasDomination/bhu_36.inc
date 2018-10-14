
##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 4.9 # 5 - building queue
  control                = ENG
  puppet                 = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  consumer = 0.2750 
  supply = 0.0875 
  production = 0.6375 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1455
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 9
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  blueprints             = { 1020 5050 6010 6030 2300 }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74003 }
  armamentminister       = { type = 9 id = 74004 }
  ministerofsecurity     = { type = 9 id = 74005 }
  ministerofintelligence = { type = 9 id = 74006 }
  chiefofstaff           = { type = 9 id = 74007 }
  chiefofarmy            = { type = 9 id = 74008 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
  landunit =
  { location = 1455
    id       = { type = 16000 id = 1 }
    name     = "Royal Bhutanese Army"
    division =
    { id       = { type = 16000 id = 2 }
      name     = "Household Division"
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 16000 id = 3 }
      name     = "Royal Division"
      type     = infantry
      model    = 0
      strength = 100
    }
  } 
	province_development = { 
		id = { type = 16000 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1455 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2370 
		days_for_first = 265 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
