#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C32274
// Address: 0x1c32274 - 0x1c32308
void sub_01C32274_0x1c32274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32274_0x1c32274");
#endif

    switch (ctx->pc) {
        case 0x1c32288u: goto label_1c32288;
        case 0x1c32290u: goto label_1c32290;
        case 0x1c322a4u: goto label_1c322a4;
        case 0x1c322acu: goto label_1c322ac;
        case 0x1c322c0u: goto label_1c322c0;
        case 0x1c322c8u: goto label_1c322c8;
        case 0x1c322dcu: goto label_1c322dc;
        case 0x1c322e4u: goto label_1c322e4;
        case 0x1c322fcu: goto label_1c322fc;
        default: break;
    }

    ctx->pc = 0x1c32274u;

    // 0x1c32274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c32274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32278: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c32278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3227c: 0x3c0601c4  lui         $a2, 0x1C4
    ctx->pc = 0x1c3227cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)452 << 16));
    // 0x1c32280: 0xc70c390  jal         func_1C30E40
    ctx->pc = 0x1C32280u;
    SET_GPR_U32(ctx, 31, 0x1C32288u);
    ctx->pc = 0x1C32284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32280u;
    // 0x1c32284: 0x24c6e790  addiu       $a2, $a2, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30E40u, 0x1C32280u, 0x1C32288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32288u;
label_1c32288:
    // 0x1c32288: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C32288u;
    {
        const bool branch_taken_0x1c32288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32288u;
        // 0x1c3228c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32288) {
            ctx->pc = 0x1C32268u;
            return;
        }
    }
    ctx->pc = 0x1C32290u;
label_1c32290:
    // 0x1c32290: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c32290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32294: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c32294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32298: 0x3c0601c4  lui         $a2, 0x1C4
    ctx->pc = 0x1c32298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)452 << 16));
    // 0x1c3229c: 0xc70c2ac  jal         func_1C30AB0
    ctx->pc = 0x1C3229Cu;
    SET_GPR_U32(ctx, 31, 0x1C322A4u);
    ctx->pc = 0x1C322A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3229Cu;
    // 0x1c322a0: 0x24c6e6b0  addiu       $a2, $a2, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30AB0u, 0x1C3229Cu, 0x1C322A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322A4u;
label_1c322a4:
    // 0x1c322a4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C322A4u;
    {
        const bool branch_taken_0x1c322a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C322A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322A4u;
        // 0x1c322a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c322a4) {
            ctx->pc = 0x1C32268u;
            return;
        }
    }
    ctx->pc = 0x1C322ACu;
label_1c322ac:
    // 0x1c322ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c322acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c322b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c322b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c322b4: 0x3c0601c4  lui         $a2, 0x1C4
    ctx->pc = 0x1c322b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)452 << 16));
    // 0x1c322b8: 0xc70c1e8  jal         func_1C307A0
    ctx->pc = 0x1C322B8u;
    SET_GPR_U32(ctx, 31, 0x1C322C0u);
    ctx->pc = 0x1C322BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C322B8u;
    // 0x1c322bc: 0x24c6e730  addiu       $a2, $a2, -0x18D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C307A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C307A0u, 0x1C322B8u, 0x1C322C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322C0u;
label_1c322c0:
    // 0x1c322c0: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C322C0u;
    {
        const bool branch_taken_0x1c322c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C322C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322C0u;
        // 0x1c322c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c322c0) {
            ctx->pc = 0x1C32268u;
            return;
        }
    }
    ctx->pc = 0x1C322C8u;
label_1c322c8:
    // 0x1c322c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c322c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c322cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c322ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c322d0: 0x3c0601c4  lui         $a2, 0x1C4
    ctx->pc = 0x1c322d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)452 << 16));
    // 0x1c322d4: 0xc70c2f0  jal         func_1C30BC0
    ctx->pc = 0x1C322D4u;
    SET_GPR_U32(ctx, 31, 0x1C322DCu);
    ctx->pc = 0x1C322D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C322D4u;
    // 0x1c322d8: 0x24c6e760  addiu       $a2, $a2, -0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30BC0u, 0x1C322D4u, 0x1C322DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322DCu;
label_1c322dc:
    // 0x1c322dc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C322DCu;
    {
        const bool branch_taken_0x1c322dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C322E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322DCu;
        // 0x1c322e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c322dc) {
            ctx->pc = 0x1C32268u;
            return;
        }
    }
    ctx->pc = 0x1C322E4u;
label_1c322e4:
    // 0x1c322e4: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x1c322e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x1c322e8: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c322e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c322ec: 0x2484f7c8  addiu       $a0, $a0, -0x838
    ctx->pc = 0x1c322ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965192));
    // 0x1c322f0: 0x24a53200  addiu       $a1, $a1, 0x3200
    ctx->pc = 0x1c322f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12800));
    // 0x1c322f4: 0xc70bdf4  jal         func_1C2F7D0
    ctx->pc = 0x1C322F4u;
    SET_GPR_U32(ctx, 31, 0x1C322FCu);
    ctx->pc = 0x1C322F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C322F4u;
    // 0x1c322f8: 0x24060389  addiu       $a2, $zero, 0x389 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 905));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F7D0u, 0x1C322F4u, 0x1C322FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322FCu;
label_1c322fc:
    // 0x1c322fc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C322FCu;
    {
        const bool branch_taken_0x1c322fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322FCu;
        // 0x1c32300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c322fc) {
            ctx->pc = 0x1C32268u;
            return;
        }
    }
    ctx->pc = 0x1C32304u;
    // 0x1c32304: 0x0  nop
    ctx->pc = 0x1c32304u;
    // NOP
    ctx->pc = 0x1c32308u;
}
