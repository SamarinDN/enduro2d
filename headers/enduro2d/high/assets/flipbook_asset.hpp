/*******************************************************************************
 * This file is part of the "Enduro2D"
 * For conditions of distribution and use, see copyright notice in LICENSE.md
 * Copyright (C) 2018-2019 Matvey Cherevko
 ******************************************************************************/

#pragma once

#include "../_high.hpp"

#include "../flipbook.hpp"
#include "../library.hpp"

namespace e2d
{
    class flipbook_asset final : public content_asset<flipbook_asset, flipbook> {
    public:
        flipbook_asset(content_type content)
        : content_asset<flipbook_asset, flipbook>(std::move(content)) {}
        static load_async_result load_async(library& library, str_view address);
    };
}
