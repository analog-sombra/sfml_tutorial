#ifndef __STATEMAIN_HPP__
#define __STATEMAIN_HPP__

#include <stack>
#include <memory>

#include "state.hpp"

namespace Engine
{
    class StateMain
    {
    private:
        std::stack<std::unique_ptr<State>> m_stateStack;
        std::unique_ptr<State> m_newState;

        bool m_add;
        bool m_replace;
        bool m_remove;

    public:
        StateMain();
        ~StateMain();

        void Add(std::unique_ptr<State> toAdd, bool replace = false);
        void PopCurrent();
        void ProcessStatechange();
        std::unique_ptr<State> &GetCurrentState();
    };
}

#endif // __STATEMAIN_HPP__
