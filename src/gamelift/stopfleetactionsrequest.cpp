/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stopfleetactionsrequest.h"
#include "stopfleetactionsrequest_p.h"
#include "stopfleetactionsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::StopFleetActionsRequest
 * \brief The StopFleetActionsRequest class provides an interface for GameLift StopFleetActions requests.
 *
 * \inmodule QtAwsGameLift
 *
 *  <fullname>Amazon GameLift Service</fullname>
 * 
 *  Amazon GameLift is a managed service for developers who need a scalable, dedicated server solution for their multiplayer
 *  games. Use Amazon GameLift for these tasks: (1) set up computing resources and deploy your game servers, (2) run game
 *  sessions and get players into games, (3) automatically scale your resources to meet player demand and manage costs, and
 *  (4) track in-depth metrics on game server performance and player
 * 
 *  usage>
 * 
 *  When setting up hosting resources, you can deploy your custom game server or use the Amazon GameLift Realtime Servers.
 *  Realtime Servers gives you the ability to quickly stand up lightweight, efficient game servers with the core Amazon
 *  GameLift infrastructure already built
 * 
 *  in>
 * 
 *  <b>Get Amazon GameLift Tools and Resources</b>
 * 
 *  </p
 * 
 *  This reference guide describes the low-level service API for Amazon GameLift and provides links to language-specific SDK
 *  reference topics. See also <a
 *  href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html"> Amazon GameLift Tools and
 * 
 *  Resources</a>>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Amazon GameLift service API includes two key sets of
 * 
 *  actions> <ul> <li>
 * 
 *  Manage game sessions and player access -- Integrate this functionality into game client services in order to create new
 *  game sessions, retrieve information on existing game sessions; reserve a player slot in a game session, request
 *  matchmaking,
 * 
 *  etc> </li> <li>
 * 
 *  Configure and manage game server resources -- Manage your Amazon GameLift hosting resources, including builds, scripts,
 *  fleets, queues, and aliases. Set up matchmakers, configure auto-scaling, retrieve game logs, and get hosting and game
 * 
 *  metrics> </li> </ul>
 * 
 *  <b> <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html"> Task-based list of API
 *  actions</a> </b>
 *
 * \sa GameLiftClient::stopFleetActions
 */

/*!
 * Constructs a copy of \a other.
 */
StopFleetActionsRequest::StopFleetActionsRequest(const StopFleetActionsRequest &other)
    : GameLiftRequest(new StopFleetActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFleetActionsRequest object.
 */
StopFleetActionsRequest::StopFleetActionsRequest()
    : GameLiftRequest(new StopFleetActionsRequestPrivate(GameLiftRequest::StopFleetActionsAction, this))
{

}

/*!
 * \reimp
 */
bool StopFleetActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFleetActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFleetActionsRequest::response(QNetworkReply * const reply) const
{
    return new StopFleetActionsResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::StopFleetActionsRequestPrivate
 * \brief The StopFleetActionsRequestPrivate class provides private implementation for StopFleetActionsRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a StopFleetActionsRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
StopFleetActionsRequestPrivate::StopFleetActionsRequestPrivate(
    const GameLiftRequest::Action action, StopFleetActionsRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFleetActionsRequest
 * class' copy constructor.
 */
StopFleetActionsRequestPrivate::StopFleetActionsRequestPrivate(
    const StopFleetActionsRequestPrivate &other, StopFleetActionsRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
