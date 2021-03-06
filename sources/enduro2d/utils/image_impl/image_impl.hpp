/*******************************************************************************
 * This file is part of the "Enduro2D"
 * For conditions of distribution and use, see copyright notice in LICENSE.md
 * Copyright (C) 2018-2019, by Matvey Cherevko (blackmatov@gmail.com)
 ******************************************************************************/

#pragma once

#include <enduro2d/utils/image.hpp>
#include <enduro2d/utils/buffer.hpp>

namespace e2d::images::impl
{
    bool try_load_image_dds(image& dst, const buffer& src) noexcept;
    bool try_load_image_pvr(image& dst, const buffer& src) noexcept;
    bool try_load_image_stb(image& dst, const buffer& src) noexcept;

    bool try_save_image_dds(const image& src, buffer& dst) noexcept;
    bool try_save_image_jpg(const image& src, buffer& dst) noexcept;
    bool try_save_image_png(const image& src, buffer& dst) noexcept;
    bool try_save_image_pvr(const image& src, buffer& dst) noexcept;
    bool try_save_image_tga(const image& src, buffer& dst) noexcept;
}
